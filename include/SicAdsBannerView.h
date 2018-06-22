//
//  SicAdsBanner.h
//
//  Created by Roman Cebotari on 1/5/15.
//  Copyright (c) 2015 sic. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const SICAdsHideBannerViewsPerpetuallyNotification;
extern NSString * const SICAdsStartProcessingBannersNotification;

@class SicAdsBannerView;

@protocol SicAdsBannerViewDelegate <NSObject>

- (void) sicAdsBannerViewDidReceiveAds:(SicAdsBannerView *) bannerView;
- (void) sicAdsBannerView:(SicAdsBannerView *) bannerView didFailWithError:(NSError *) error;

@optional
- (void) didReceiveBannerAds __attribute__((deprecated("METHOD IS DEPRECATED! Use -sicAdsBannerViewDidReceiveAds: instead.")));
- (void) didFailWithError:(NSError *) error __attribute__((deprecated("METHOD IS DEPRECATED! Use -sicAdsBannerView:didFailWithError: instead.")));

@end

/**
 *  View that load multiple banner ads in single view.
 */
@interface SicAdsBannerView : UIView

@property (nonatomic, weak) id <SicAdsBannerViewDelegate> bannerDelegate;

@end
