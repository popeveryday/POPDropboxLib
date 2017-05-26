Pod::Spec.new do |s|
s.name             = "POPDropboxLib"
s.version          = "0.1.2"
s.summary          = "Lib for dropbox api v2."
s.homepage         = "https://github.com/popeveryday/POPDropboxLib"
s.license          = 'MIT'
s.author           = { "popeveryday" => "popeveryday@gmail.com" }
s.source           = { :git => "https://github.com/popeveryday/POPDropboxLib.git", :tag => s.version.to_s }
s.platform     = :ios, '7.1'
s.requires_arc = true
s.source_files = 'POPDropboxLib/Classes/**/*.{h,m,c}'
s.dependency 'POPLib', '~> 0.1'
end
