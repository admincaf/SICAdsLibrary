//
//  SICGalleryViewController.h
//
//  Created by Roman Cebotari on 12/13/14.
//  Copyright (c) 2014 Softintercom & Co. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Custom button which is hidden until gallery is loaded in full. No need to do manual checks for this.
 */

@interface SICGalleryButton : UIButton

@end

@interface SICGalleryViewController : UIViewController

/**
 * SICGalleryViewController cell customization
 */

@property (nonatomic) UIEdgeInsets cellMarginInsets;
@property (nonatomic) UIEdgeInsets contentMarginInsets;

/**
 *  SICGalleryViewController close button frame for screen orientation
 */

@property (nonatomic) CGRect closeButtonFramePortret;
@property (nonatomic) CGRect closeButtonFrameLandscape;

/**
 *  Sets the background image to use for the specified button state
 *
 *  @param image The background image to use for the specified state.
 *  @param state The state that uses the specified image. The values are described in UIControlState.
 */

- (void) setCloseButtonBackgroundImage:(UIImage *) image forState:(UIControlState) state;

/**
 *  Check if can present SICGalleryViewController
 *
 *  @return YES if the if the SICGalleryViewController can be shown.
 */

+ (BOOL) canShow;

/**
 *  Present SICGalleryViewController with params and downloaded SICAds galleryItems
 *
 *  @param fullscreen   The BOOL value for fullscreen mode
 *  @param staticHeader The BOOL value for static header in gallery
 */

- (void) showInFullscreenMode:(BOOL) fullscreen staticHeader:(BOOL) staticHeader;

@end
