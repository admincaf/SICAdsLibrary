//
//  SicAdsBanner.h
//
//  Created by Roman Cebotari on 1/5/15.
//  Copyright (c) 2015 sic. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SicAdsBannerViewDelegate <NSObject>

- (void)didReceiveBannerAds;

- (void)didFailWithError:(NSError *)error;

@end

/**
 *  View that load multiple banner ads in single view.
 */
@interface SicAdsBannerView : UIView

@property (nonatomic, weak) id <SicAdsBannerViewDelegate> bannerDelegate;

/**
 *  View property for parse ads in view. Get bannerTag from Project Manager
 */
@property(nonatomic, strong) NSString *bannerTag;

@end
