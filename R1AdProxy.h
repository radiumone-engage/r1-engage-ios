//
//  R1AdProxy.h
//  R1EngageSDK
//
//  Created by Drew Colace on 9/30/14.
//  Copyright (c) 2014 Radiumone. All rights reserved.
//

extern NSString * const R1AdStateLoadedNotification;
extern NSString * const R1AdStateFailedNotification;
extern NSString * const R1AdStateWillAppearNotification;
extern NSString * const R1AdStateWillDisappearNotification;
extern NSString * const R1AdStateDidDisappearNotification;
extern NSString * const R1AdStateNoContentNotification;

extern NSString * const R1BannerViewKey;

@interface R1AdProxy : NSObject

@property (nonatomic, copy) NSDictionary  *placementIds;
@property (nonatomic, readonly) NSString *mediationSessionId;

- (void)setRootViewControllerForAdPresentation:(UIViewController *)rootController;

@end
