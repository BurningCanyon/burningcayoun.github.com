require 'uri'
require 'net/http'

uri = URI.parse(ARGV.first)
Net::HTTP.start uri.host, uri.port do |http|
    response = http.get(uri.path)

    case response.code.to_i
    when 200
        puts response.body
    else
        puts %(#{response.code} #{response.message})
    end
end


Net::HTTPResonese
Net::HTTPInformation
    Net::HTTPContinue
    Net::HTTPSwotchProtocol
Net::HTTPSiccess
    Net::HTTPOK
    Net::HTTPCreated
    #중략
Net::HTTPRedirection
    Net::HTTPMultipleChoice
    Net::HTTPMovedPermanently
    #중략
Net::HTTPClientError
    Net::HTTPBadReqiest
    Net::HTTPUnauthorized
    #중략
Net::HTTPServerError
    Net::HTTPInternalServerError
    Net::HTTPNotImplemented
    #중략
Net::HTTPUnknownResopnse

print Net:;HTTP.get(uri)
Net::HTTP.get_print(uri)

uri = URI.parse('htt[s://www.ruby=lang.org.kr/')
http = Net::HTTP.new(uri.host, uri.port)

http.start  #https세션 개시
p http.active?  #http 세션이 시작되었는지 확인
http.finish     #http 세션이 종료되었는지 확인

http.start  #http 세션을 다시 개시 (이미 개시되어 있으면 IOError)

#접속시 타이아웃 설정(초)
http.open_timeout = 60
p http.read_timeout # => 60 

http.get uri.path
http.head uri.path
http.pst uri.path, data
http.delete uri.path
https.put uri.path,data

uri = URI.parse('http://www.jpub.kr/')
response = Net::HTTP.get_response(uri)
response.code # => '200'
response.message # => "ok"
response.body # => 웹페이지 콘텐츠

def fetch(uri, limit = 6)
    response = Net::HTTP.get_response(uri)

    case response.code.to_i
    when 200
        puts response.body
        unless limit.zero?
            fetch URI.parse(response['Location']), limit.pred
        else
            response.value
        end
    else
        response.value
    end
end

uri = URI.parse('http://example.com/')
fetch uri

http  = Net::HTTp.new('example.com')
