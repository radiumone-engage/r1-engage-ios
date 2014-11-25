//
//  R1BannerAdProxy.h
//  R1EngageSDK
//
//  Created by Drew Colace on 10/3/14.
//  Copyright (c) 2014 Radiumone. All rights reserved.
//

#import "R1AdProxy.h"
#import "R1BannerAdTypes.h"

@interface R1BannerAdProxy : R1AdProxy

@property (nonatomic, strong) UIView *bannerView;
@property (nonatomic) R1BannerType    bannerType;

/**
 must load the banner before you display it
 */
- (void)loadBannerType:(R1BannerType)bannerType;

@end
