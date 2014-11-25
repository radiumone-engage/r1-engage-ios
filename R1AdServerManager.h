//
//  R1AdServerManager.h
//  R1EngageSDK
//
//  Created by Drew Colace on 9/29/14.
//  Copyright (c) 2014 Radiumone. All rights reserved.
//

#import "R1BannerAdProxy.h"
#import "R1InterstitialAdProxy.h"
#import "R1OfferwallAdProxy.h"
#import "R1VideoAdProxy.h"

extern NSString * const R1AdNetworkEngage;
extern NSString * const R1AdNetworkAdMob;
extern NSString * const R1AdNetworkMoPub;

extern NSString * const R1AdViewBanner;
extern NSString * const R1AdViewInterstitial;
extern NSString * const R1AdViewVideo;
extern NSString * const R1AdViewOfferwall;

@interface R1AdServerManager : NSObject

@property (nonatomic, assign) BOOL  mediationEnabled;

- (NSDictionary *)mediationRules;

- (R1BannerAdProxy *)bannerAdViewProxy;
- (R1InterstitialAdProxy *)interstitialAdViewProxy;
- (R1OfferwallAdProxy *)offerwallAdViewProxy;
- (R1VideoAdProxy *)videoAdViewProxy;

@end
