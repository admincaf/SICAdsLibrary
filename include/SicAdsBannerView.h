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

@required
- (void) sicAdsBannerViewDidReceiveAds:(SicAdsBannerView *) bannerView;
- (void) sicAdsBannerView:(SicAdsBannerView *) bannerView didFailWithError:(NSError *) error;

@end

/**
 *  View that load multiple banner ads in single view.
 */
@interface SicAdsBannerView : UIView

@property (nonatomic, weak) id <SicAdsBannerViewDelegate> bannerDelegate;

- (instancetype) initWithFrame:(CGRect) frame andParentViewController:(UIViewController *) viewController;

@end
