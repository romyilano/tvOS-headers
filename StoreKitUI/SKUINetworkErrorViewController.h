//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIProductPageChildViewController-Protocol.h>

@class NSError, NSString, SKUIClientContext, SKUIProductPageHeaderViewController, UIScrollView;
@protocol SKUINetworkErrorDelegate;

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController>
{
    SKUIClientContext *_clientContext;
    id <SKUINetworkErrorDelegate> _delegate;
    NSError *_error;
}

+ (_Bool)canDisplayError:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_networkTypeChanged:(id)arg1;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)loadView;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
