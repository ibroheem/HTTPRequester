#include "http_client.h"

namespace rest_interface
{

   server::server() : m_session("localhost") { }
   server::server(cchar* _host) : m_session(_host) { }
   server::server(string&& _host) : m_session(std::move(_host)) { }
   server::server(const string& _host) : m_session(_host) { }
   server::server(cchar* _host, uint16 _port) : m_session(_host, _port) { }
   server::server(string&& _host, uint16 _port) : m_session(std::move(_host), _port) { }
   server::server(const string& _host, uint16 _port) : m_session(_host, _port) { }

   void server::set_method(HTTP_METHODS _mthd)
   {
      switch(_mthd)
      {
         case HTTP_METHODS::CONNECT:
            m_request.setMethod(HTTPRequest::HTTP_CONNECT);
            break;

         case HTTP_METHODS::DELETE:
            m_request.setMethod(HTTPRequest::HTTP_DELETE);
            break;

         case HTTP_METHODS::GET:
            m_request.setMethod(HTTPRequest::HTTP_GET);
            break;

         case HTTP_METHODS::POST:
            m_request.setMethod(HTTPRequest::HTTP_POST);
            break;

         case HTTP_METHODS::OPTIONS:
            m_request.setMethod(HTTPRequest::HTTP_OPTIONS);
            break;
      }
   }

   void server_usage()
   {
      auto run = [&]()
      {
         server srv("localhost", 9980);
         srv.set_uri_part("/api/firsttime/pos/agent");
         srv.add_header("client_id", "POS/CL/1");
         srv.add_header("client_name", "Client 1");
         srv.add_header("code", "POS9111");
         srv.add_header("name", "Client 1");

         srv.add_header("agent_id",   "POS/CL/1/AG/1");
         srv.add_header("agent.name", "Client.Agent.1");
         srv.add_header("imei",       "844368987665435");
         srv.add_header("pin",        "1234");

         srv.send_request();
         istream& response = srv.receive_response();
         //StreamCopier::copyStream(response, std::cout);

         string js_response;
         StreamCopier::copyToString(response, js_response);

         try
         {
            /*json js = json::parse(js_response.data());

            int status = 200;
            string&& msg = js["message"];
            if (status == 200)
               print("Success\nMessage: {}\n", msg);
            else if (status == 404)
            {
               print("Error!\nMessage: {}\n", msg);
               return EXIT_FAILURE;
            }*/
         }
         catch(exception& e)
         {
            print("Error: {}\n{}\n", e.what());
         }

         return EXIT_SUCCESS;
      };

      try
      {
         while(run() != 2)
         {
            //sleep(3);
         }
      }
      catch(Poco::Exception& exp)
      {
         fmt::print("Error: {}\n", exp.displayText());
         //sleep(20);
         //throw run();
      }
   }

}
