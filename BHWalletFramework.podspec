
Pod::Spec.new do |spec|

  spec.name         = "BHWalletFramework"
  spec.version      = "0.0.7"
  spec.summary      = "test BHWalletFramework 1006.1"

  spec.description  = <<-DESC
test BHWalletFramework 1013.a1
                   DESC

  spec.homepage     = "https://github.com/marsLiuFei/BHWalletFramework"
 
  spec.license      = "MIT"
  
  spec.author             = { "GaiShiDaYingXiong" => "mars_liu_dev@163.com" }
  
  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/marsLiuFei/BHWalletFramework.git", :tag => "#{spec.version}" }

  spec.resource  = 'BHWalletFramework/Resources.bundle'
  spec.ios.vendored_frameworks = 'BHWalletFramework/HBWalletFramework.framework'
   spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
   
  #  spec.source_files = 'BHWalletFramework/*'

    spec.dependency 'Masonry', '~> 1.1.0'
    spec.dependency 'MJRefresh', '~> 3.4.3'
    spec.dependency 'MJExtension', '~> 3.2.2'
    spec.dependency 'MBProgressHUD', '~> 1.2.0'
    spec.dependency 'IQKeyboardManager', '~> 6.5.6'
    spec.dependency 'XMNetworking', '~> 1.1.0'
    spec.dependency 'SDWebImage', '~> 5.8.0'
    spec.dependency 'CRBoxInputView', '~> 1.2.1'
    spec.dependency 'YYText', '~> 1.0.7'
    spec.dependency 'JXCategoryView', '~> 1.5.6'
    spec.dependency 'JXPagingView/Pager', '~> 1.0.1'
    spec.dependency 'BlocksKit', '~> 2.2.5'
    spec.dependency 'DZNEmptyDataSet', '~> 1.8.1'
    spec.dependency 'CXDatePickerView', '~> 0.2.2'
    spec.dependency 'IFMMenu', '~> 1.0.3'


   spec.requires_arc = true
end
