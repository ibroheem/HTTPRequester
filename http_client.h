#ifndef http_client_h
#define http_client_h

#include <fmt/format.h>
#include <mib/typedefs.h>

#include <Poco/Net/ServerSocket.h>
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/StreamCopier.h>
//#include <Poco/URI.h>
//#include <mib/Poco/net>
#include <mib/timer>

//#include <nlohmann/json-2.0.10.hpp>

using namespace fmt;
using namespace std;
using namespace mvc_utils;
//using namespace nlohmann;
using namespace Poco;
using namespace Poco::Net;

namespace rest_interface
{
   struct server
   {
      public:
         enum class HTTP_METHODS { CONNECT, DELETE, GET, POST, OPTIONS };

         server();
         server(cchar* host);
         server(string&&);
         server(const string&);
         server(cchar* host, uint16 port);
         server(string&& host, uint16 port);
         server(const string& host, uint16 port);

         void add_header(cchar* _name, cchar* _value) { m_request.add(_name, _value); }
         void add_header(string&& _name, string&& _value) { m_request.add(std::move(_name), std::move(_value)); }
         void add_header(const string& _name, const string& _value) { m_request.add(_name, _value); }

         inline const string& host()  const { return m_session.getHost(); }
         inline uint16 port() const { return m_session.getPort(); }

         istream& receive_response() { return m_session.receiveResponse(m_response); }
         ///istream& receive_response(HTTPResponse&& );
         ///istream& receive_response(const HTTPResponse& );

         ostream& send_request()     { return m_session.sendRequest(m_request); }
         ///ostream& send_request(HTTPRequest&& _request)  { m_request= std::move(_request); send_request(); }
         ///ostream& send_request(const HTTPRequest& _request)  { m_request= _request; send_request(); }

         HTTPRequest&       request()  { return m_request; }
         HTTPResponse&      response() { return m_response; }
         HTTPClientSession& session()  { return m_session; }

         void set_host(cchar* _host)   { m_session.setHost(_host); }
         void set_host(string&& _host) { m_session.setHost(std::move(_host)); }
         void set_host(const string& _host) { m_session.setHost(_host); }

         void set_method(HTTP_METHODS);
         void set_uri_part(cchar* _uri) { m_request.setURI(_uri); }
         void set_uri_part(string&& _uri) { m_request.setURI(std::move(_uri)); }
         void set_uri_part(const string& _uri) { m_request.setURI(_uri); }

         void set_port(uint16 _port) { m_session.setPort(_port); }
         void set_proxy_config(HTTPClientSession::ProxyConfig&& _proxy) { m_session.setProxyConfig(std::move(_proxy));}
         void set_proxy_config(const HTTPClientSession::ProxyConfig& _proxy) { m_session.setProxyConfig(_proxy); }

      private:
         HTTPClientSession m_session;
         HTTPResponse      m_response;
         HTTPRequest       m_request;
   };
}

#endif//http_client_h
