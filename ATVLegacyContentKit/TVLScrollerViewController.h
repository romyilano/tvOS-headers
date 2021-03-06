//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVStackViewController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>
#import <ATVLegacyContentKit/TVLImageHeaderWithButtonsViewDelegate-Protocol.h>
#import <ATVLegacyContentKit/TVStackViewControllerDataSource-Protocol.h>
#import <ATVLegacyContentKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, TVLHeaderElement, TVLScrollerElement, TVLSubScrollerElement, UIView;

@interface TVLScrollerViewController : TVStackViewController <TVStackViewControllerDataSource, UIScrollViewDelegate, TVLImageHeaderWithButtonsViewDelegate, ATVUpdatable>
{
    NSIndexPath *_currentFocusedIndexPath;
    TVLHeaderElement *_headerElement;
    NSArray *_scrollerItems;
    _Bool _forceReload;
    _Bool _shouldUseFixedHeader;
    UIView *_headerView;
    NSArray *_cachedItemHeights;
    TVLScrollerElement *_scrollerElement;
    TVLSubScrollerElement *_subScrollerElement;
    double _adjustedContentInset;
    _Bool _everActivated;
    double _scrollContentInset;
}

@property(nonatomic) double scrollContentInset; // @synthesize scrollContentInset=_scrollContentInset;
@property(nonatomic) _Bool everActivated; // @synthesize everActivated=_everActivated;
- (void).cxx_destruct;
- (void)reloadData;
- (void)updateScrollerItems;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)_viewControllerForFeedElement:(id)arg1;
- (void)_calculateItemHeightsIfNeeded;
- (void)headerView:(id)arg1 didSelectButtonAtIndex:(long long)arg2;
- (id)stackViewController:(id)arg1 viewControllerForSection:(long long)arg2;
- (double)stackViewController:(id)arg1 heightForSection:(long long)arg2;
- (long long)numberOfSectionsInStackViewController:(id)arg1;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)reloadPage;
- (void)tvl_restoreStateWithCoder:(id)arg1;
- (void)tvl_saveStateWithCoder:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)focusedViewDidChange;
- (void)viewDidLayoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)imageHeaderDidLoadImage:(id)arg1;
- (id)preferredFocusedView;
- (void)loadView;
- (id)initWithSubScrollerElement:(id)arg1;
- (id)initWithScrollerElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

