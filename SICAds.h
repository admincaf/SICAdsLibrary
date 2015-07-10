//
//  SICAds.h
//
//  Created by Roman Cebotari on 1/22/15.
//  Copyright (c) 2015 sic. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface SICAds : NSObject

/**
 *  Enable debug mode for library
 */

+ (void)debug;


/**
 *  Show Fullscreen Ads
 */

+ (void)show;

/**
 *
 *  Show ads with specific tag. Get tag from Project Manager
 *
 */

+ (void)showWithTag:(NSString *)tag;


/**
 *  Call this method if user remove ads using In-App Purchase
 */

+ (void)cancelRefreshAds;


/**
 *
 *  @return Array of gallery objects
 */

+ (NSArray *)galleryItems;


@end
