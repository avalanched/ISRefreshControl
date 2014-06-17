#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ISRefreshingState) {
    ISRefreshingStateNormal,
    ISRefreshingStateRefreshing,
    ISRefreshingStateRefreshed,
};

@interface ISRefreshControl : UIControl

@property (nonatomic, readonly, getter=isRefreshing) BOOL refreshing;

@property (nonatomic, strong) UIView *placeholderView;
@property (nonatomic) ISRefreshingState refreshingState;

@property (nonatomic, readonly) CGFloat offsetY;

@property (nonatomic, strong) UIColor *tintColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) NSAttributedString *attributedTitle UI_APPEARANCE_SELECTOR;

- (void)beginRefreshing;
- (void)endRefreshing;

@end
