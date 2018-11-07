# SICAds 7.4.31

![SICAds](https://s22.postimg.org/4lcwytm6p/SIC.png)

[![Version](https://img.shields.io/cocoapods/v/SICAds.svg?style=flat)](http://cocoapods.org/pods/SICAds)
[![License](https://img.shields.io/cocoapods/l/SICAds.svg?style=flat)](http://cocoapods.org/pods/SICAds)
[![Platform](https://img.shields.io/cocoapods/p/SICAds.svg?style=flat)](http://cocoapods.org/pods/SICAds)

## Steps to upload new library version:
```
1. Add the following two lines to running script of Complete and Push target (updating to latest version):
    git tag 7.4.31;
    git push origin --tags;
2. Build Complete and Push target in order to run its script.
3. pod spec lint SICAds.podspec --verbose --allow-warnings
4. pod trunk push SICAds.podspec --allow-warnings
```

## What is new in 7.4.31 version
1. Added initializer call for MoPub SDK (new API)

## What is new in 7.4.30 version
1. Minor housekeeping

## What is new in 7.4.29 version
1. Added rate us alert display delegate callback

## What is new in 7.4.28 version
1. Added rate us alert display delegate callback

## What is new in 7.4.27 version
1. Reloading cocoapod after failed attempt

## What is new in 7.4.26 version
1. Made SICAds class a shared class
2. Added SICAdsDelegate protocol in order to notify about interstitial impression and dismissing

## What is new in 7.4.25 version
1. Fixed banners workflow bug

## What is new in 7.4.24 version
1. Fixing banner protocol and minor cleanup

## What is new in 7.4.23 version
1. Fixing banner protocol

## What is new in 7.4.22 version
1. Fixing banner protocol

## What is new in 7.4.21 version
1. Send an error delegate method for failing banner loading

## What is new in 7.4.20 version
1. Minor fix from 7.4.18

## What is new in 7.4.19 version
1. Added to version because 7.4.18 failed to load pod

## What is new in 7.4.18 version
1. Added custom init method for banner class

## What is new in 7.4.17 version
1. Updated frameworks to latests versions

## What is new in 7.4.16 version
1. Downversion SpotX Framework

## What is new in 7.4.15 version
1. Updated dependencies versions

## What is new in 7.4.14 version
1. Updated StartApp framework to latest version

## What is new in 7.4.13 version
1. Revmob added as separate framework

## What is new in 7.4.12 version
1. Replaced Appodeal dependencies with original ones (StartApp added as separate framework)
2. Preparing project for tagging and trunkating Cocoapod

## What is new in 7.4.11 version
1. Added [iSoma init] call before any Smaato operations
2. Transformed some static classes into singleton

## What is new in 7.4.10 version
1. Added new Rate Us alert, available from iOS 10.3

## What is new in 7.4.9 version
1. Updated pods frameworks to latest versions

## What is new in 7.4.8 version
1. Added multiple keys system for MobFox interstitials and banners
2. Updated AdMob to get rid of banner disappearing after showing interstitial bug
3. Removed pods versions in order to always get latest updates

## What is new in 7.4.7 version
1. Disabled turning off notifications option

## What is new in 7.4.6 version
1. Recreated lib project from scratch and rearranged files and folders

## What is new in 7.4.5 version
1. Added MobFox service (Interstitial & Banner)
2. Skipping SICInterstitial if response status code is different to 200 (success code)
3. SICInterstitial show limit changed from local constant to server changeable value (default 0 means no limit)
4. Finished logic for Push Notifications, using OneSignal SDK

## What is new in 7.4.4 version

1. Fixed few fabric crashes
2. Added banners step increase timing delay minimum check (for last step)

## What is new in 7.4.3 version

1. Fixed stats requests sending bug (POST requests were sending as GET with no parameters)

## What is new in 7.4.2 version

1. Fixing bugs on banners workflow for multiple app banners case
2. Fixing dealloc bug for some banner services

## What is new in 7.4.1 version

1. If there are no steps in banner workflow, then load by priority

## What is new in 7.4.0 version

1. Added workflow logic for banners
2. Added multiple keys system for admob, mopub and smaato banners
3. Removed tag for banners
4. Updated ads libraries to latest versions
5. Fixed non-resume ads bug, after an early rate us show
6. Added Smaato plugins for AdMob, Mopub, Millennial and Facebook
7. Added AdMob adapter for Mopub

## What is new in 7.3.43 version

1. Fixed loading with a new key for smaato and mopub interstitial with multiple keys 

## What is new in 7.3.42 version

1. Disabled support of SICAds interstitial for iOS earlier than 8.0 (skipping)

## What is new in 7.3.41 version

1. Fixed Mopub loading error no completion block call

## What is new in 7.3.40 version

1. Fixed multiple keys selection according to workflow order
2. Fixed step reset on loading, if start_from_zero is enabled

## What is new in 7.3.39 version

1. Added start from zero feature
2. Fixed SICAds interstitial loading case when url is nil or empty

## What is new in 7.3.38 version

1. Fixed not showing store item in application (by using redirect as backup option)

## What is new in 7.3.37 version

1. Added Multiple Keys Logic for Mopub 
2. Added Multiple Keys Logic for Smaato

## What is new in 7.3.36 version

1. Fixed SICAds video interstitial sound and loading bugs (Replaced UIWebView with WKWebView)

## What is new in 7.3.35 version

1. Fixed no workflow interstitial type generator

## What is new in 7.3.34 version

1. Fixed iOS 7 crash of -containsString method

## What is new in 7.3.33 version

1. Fixed SICAds interstitial thread blocks issue, that leaded to crash

## What is new in 7.3.32 version

1. Fixed stats details in cases when alerts or SICAds interstitials surpass showing limits

## What is new in 7.3.31 version

1. SICAds interstitial close block bug fix
2. If ads_refresh_time = 0, skip the timer

## What is new in 7.3.30 version

1. Some versions minor updates

## What is new in 7.3.29 version

1. Fixed preferred action (UIAlertViewController) for iOS 8

## What is new in 7.3.28 version

1. Added functional for Push Notifications

## What is new in 7.3.27 version

1. Flurry ads fixes
2. Interstitial blocks callbacks code improvement

## What is new in 7.3.26 version

1. Open store links in popup window

## What is new in 7.3.25 version

1. Improved logs logic and organization
2. Added workflow skip mode
3. Added Smaato Service (Interstitial, VAST Video and Banner)
4. Added Multiple Keys Logic for AdMob

## What is new in 7.3.24 version

1. Moved some specification files from Appodeal repo to our own

## What is new in 7.3.23 version

1. Added Rate Us for No Ads Mode

## What is new in 7.3.22 version

1. Fixed alerts UI: OK button - preferred button

## What is new in 7.3.21 version

1. Fixed showing alerts by priority

## What is new in 7.3.20 version

1. Added Force Mode for Rate Us Alerts

## What is new in 7.3.18 version

1. Added requests from load method to main (iOS 7/iPhone 4 support - CPU was 100%)

## What is new in 7.3.17 version

1. Downgraded AdColony to version 2

## What is new in 7.3.15 version

1. Updated AdColony to version 3

## What is new in 7.3.14 version

1. Fixed ads timing issues
2. Removed Appodeal
3. Separated Rate Us Logic
4. Minor bugs fixes and code improvements
5. XCode 8 compatibility
6. Optimized statistics

## Installation with CocoaPods

[CocoaPods](https://cocoapods.org) is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries in your projects. See the ["Getting Started" guide](https://guides.cocoapods.org/using/getting-started.html) for more information.

**Open in Terminal project root directory, and initialize pods running the following command:**

```
pod init
```

## Podfile

```
platform :ios, '8.1'
inhibit_all_warnings!

source 'https://github.com/CocoaPods/Specs.git'

target 'TargetName' do

pod 'SICAds'

end
```

