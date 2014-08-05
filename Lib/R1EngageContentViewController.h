#import <UIKit/UIKit.h>
#import "R1EngageLoadingConstants.h"

@protocol R1EngageContentViewControllerDelegate;

@interface R1EngageContentViewController : UIViewController

@property (nonatomic, assign) id<R1EngageContentViewControllerDelegate> delegate;
@property (nonatomic, readonly) BOOL loaded;
@property (nonatomic, readonly) BOOL loading;

- (void) load:(R1EngageLoadingDidFinishedBlock) didFinished;
- (void) showFromViewController:(UIViewController *) viewController;

- (void) loadAndShowFromViewController:(UIViewController *) viewController;

- (void) hide;

+ (instancetype) viewController;

@end

@protocol R1EngageContentViewControllerDelegate <NSObject>

@optional

- (void) engageContentViewControllerDidStartLoading:(R1EngageContentViewController *) engageContentViewController;
- (void) engageContentViewController:(R1EngageContentViewController *) engageContentViewController didFinishLoadingWithResult:(R1EngageLoadingResult) loadResult loadError:(NSError *) loadError;

- (void) engageContentViewControllerWillAppear:(R1EngageContentViewController *) engageContentViewController;
- (void) engageContentViewControllerDidAppear:(R1EngageContentViewController *) engageContentViewController;
- (void) engageContentViewControllerWillDisappear:(R1EngageContentViewController *) engageContentViewController;
- (void) engageContentViewControllerDidDisappear:(R1EngageContentViewController *) engageContentViewController;

@end
