//
//  SICAdsReward.h
//  SICAdsLib
//
//  Created by User on 12/7/18.
//  Copyright © 2018 Dev. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger
{
    SICAdsRewardTypeAdMob,
    SICAdsRewardTypeMopub
} SICAdsRewardType;

@protocol SICAdsRewardDelegate <NSObject>

@required
- (void) sicAdsRewardDidRewardUser;
- (void) sicAdsRewardLoadingDidFailWithError:(NSError *) error;

@end

@interface SICAdsReward : NSObject

@property (nonatomic, weak) id <SICAdsRewardDelegate> delegate;

- (id) initWithType:(SICAdsRewardType) type andKey:(NSString *) key;

- (void) requestRewardVideo;
- (void) playRewardVideo;
- (BOOL) canShowRewardVideo;

@end

