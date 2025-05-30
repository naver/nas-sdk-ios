
Pod::Spec.new do |s|

  s.name         = "Naver-Ads-Services"
  s.version      = "1.1.1"
  s.summary      = "NaverAdsServices SDK"
  s.description  = <<-DESC
                    NaverAdsServices wiil provide shared functions for NAM, GFP SDK
                   DESC
  s.homepage     = "https://github.com/naver/nas-sdk-ios"
  s.license      = { :type => "Naver", :text => "Copyright 2022 NAVER Corp." } 
  s.author       = { "Sanghun.han" => "sanghun.han@navercorp.com",
                     "Sodam.kim" => "sodam.k@navercorp.com",
                     "Dojin.park" => "dojin.park@navercorp.com"
  }
  
  s.ios.deployment_target = "13.0"
  s.source       = { :git => "https://github.com/naver/nas-sdk-ios", :tag => "#{s.version.to_s}" }

  s.vendored_frameworks = "NaverAdsServices/xcframework/NaverAdsServices.xcframework"
  s.frameworks = 'UIKit', 'Foundation', 'QuartzCore', 'CoreServices', 'SystemConfiguration', 'WebKit', 'CoreLocation', 'Network'
  
  s.requires_arc = true
  
  s.swift_versions = ['5.0']

  s.pod_target_xcconfig  = { 'OTHER_LDFLAGS' => '-ObjC' }
  
end
