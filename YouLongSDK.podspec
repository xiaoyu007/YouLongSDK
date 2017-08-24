:Pod::Spec.new do |s|
s.name = "YouLongSDK" 
s.version = "2.3.7" 
s.ios.deployment_target = '8.0' 
s.summary = "游龙支付sdk,一个支付SDK." 
s.homepage = "https://github.com/xiaoyu007/YouLongSDK" 
s.license = { :type => "MIT", :file => "LICENSE" } 
s.author = { "Simple" => "810646506@qq.com" } 
s.source = { :git => "https://github.com/xiaoyu007/YouLongSDK", :tag => s.version } 
#s.source_files = "YouLongSDK/*" 
s.resources = "YouLongSDK/RWUIControls.bundle" 
s.frameworks = 'Foundation', 'UIKit', 'CoreLocation', 'AdSupport' 
s.vendored_frameworks = 'RWUIControls.framework' 
s.requires_arc = true 
end

