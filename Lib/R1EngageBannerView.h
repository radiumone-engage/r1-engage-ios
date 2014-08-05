#import <UIKit/UIKit.h>
#import "R1EngageLoadingConstants.h"

@protocol R1EngageBannerViewDelegate;

@interface R1EngageBannerView : UIView

@property (nonatomic, assign) id<R1EngageBannerViewDelegate> delegate;
@property (nonatomic, readonly) BOOL loaded;
@property (nonatomic, readonly) BOOL loading;

@property (nonatomic, readonly) CGSize predefinedSize;
@property (nonatomic, readonly) BOOL isCustomSize;

- (void) load:(R1EngageLoadingDidFinishedBlock) didFinished;

@end

@protocol R1EngageBannerViewDelegate <NSObject>

@optional

- (void) engageBannerViewDidStartLoading:(R1EngageBannerView *) engageBannerView;
- (void) engageBannerView:(R1EngageBannerView *) engageBannerView didFinishLoadingWithResult:(R1EngageLoadingResult) loadResult loadError:(NSError *) loadError;

@end
