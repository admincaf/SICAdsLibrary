#
# Be sure to run `pod lib lint SICAds.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "SICAds"
  s.version          = "7.4.36"
  s.summary          = "Client SICAds library."

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!  
  s.description      = <<-DESC
                       SICAds iOS Static library distributed via cocoapods
                       DESC

  s.homepage         = "https://github.com/admincaf/SICAdsLibrary"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.author           = { "Radu" => "rmatei1@gmail.com" }
  s.source = { :git => "https://github.com/admincaf/SICAdsLibrary.git", :tag => s.version.to_s }
  s.source_files = "include/*.h"
  s.public_header_files = "include/*.h"
  s.preserve_paths = "libSicAds.a"
  s.ios.vendored_library = "libSicAds.a"
  s.vendored_frameworks = 'StartApp.framework', 'RevMobAds.framework'
  s.resource = 'StartApp.bundle'
  # s.social_media_url = "https://twitter.com/<TWITTER_USERNAME>"

  s.platform     = :ios, '9.0'
  s.requires_arc = true

  s.ios.frameworks = 'AdSupport', 'AudioToolbox', 'AVFoundation', 'CFNetwork', 'CoreFoundation', 'CoreGraphics', 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony', 'EventKit', 'EventKitUI', 'Foundation', 'MediaPlayer', 'MessageUI', 'MobileCoreServices', 'QuartzCore', 'Security', 'Social', 'StoreKit', 'SystemConfiguration', 'UIKit', 'WebKit', 'StartApp', 'RevMobAds'

  s.dependency 'AdColony'
  s.dependency 'AFNetworking'
  s.dependency 'AmazonAd'
  s.dependency 'AppLovinSDK'
  s.dependency 'ChartboostSDK'
  s.dependency 'FBAudienceNetwork'
  s.dependency 'Flurry-iOS-SDK/FlurryAds'
  s.dependency 'Flurry-iOS-SDK/FlurrySDK'
  s.dependency 'Google-Mobile-Ads-SDK'
  s.dependency 'InMobiSDK'
  s.dependency 'MMAdSDK'
  s.dependency 'MobFoxSDK'
  s.dependency 'mopub-ios-sdk'
  s.dependency 'OneSignal'
  s.dependency 'SmaatoSDK'
  s.dependency 'SpotX-SDK', '2.3.3'       #iOS<9 support
  s.dependency 'UnityAds'
  s.dependency 'VungleSDK-iOS', '~> 4.1'          #if update -> errors
  s.dependency 'YandexMobileAds'

end
