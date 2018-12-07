//
//  SICAds.h
//
//  Created by Roman Cebotari on 1/22/15.
//  Copyright (c) 2015 sic. All rights reserved.
//
#import <Foundation/Foundation.h>

@class SICAds;
@protocol SICAdsDelegate <NSObject>

@optional
- (void) sicAdsIsDisplayingInterstitial;
- (void) sicAdsInterstitialDismissed;

@end

@interface SICAds : NSObject

/**
 *  Shared instance
 */

+ (instancetype) shared;

/**
 *  Enable debug mode for library
 */

- (void) enableDebugging;


/**
 *  Show Fullscreen Ads
 */

- (void) show;

/**
 *
 *  Show ads with specific tag. Get tag from Project Manager
 *
 */

- (void) showWithTag:(NSString *) tag;


/**
 *  Call this method if user remove ads using In-App Purchase
 */

- (void) cancelRefreshAds;

/**
 *  Hide interstitial and banner ads forever
 */

- (void) hideAllAdsPerpetually;

/**
 *
 *  @return Array of gallery objects
 */

- (NSArray *) galleryItems;

/**
 *
 *  @return current SDK version
 */

- (NSString *) version;

/**
 *
 *  SICAdsDelegate Methods
 */
- (void) addDelegate:(id<SICAdsDelegate>) delegate;
- (void) removeDelegate:(id<SICAdsDelegate>) delegate;

@end
