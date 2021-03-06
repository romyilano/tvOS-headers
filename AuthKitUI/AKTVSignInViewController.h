//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <AuthKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, UIViewController;
@protocol AKTVSignInViewControllerDelegate;

@interface AKTVSignInViewController : UINavigationController <UIGestureRecognizerDelegate>
{
    _Bool _isUsernameEditable;
    CDUnknownBlockType _ak_cancelAction;
    CDUnknownBlockType _ak_authenticateAction;
    NSString *_username;
    NSString *_password;
    NSString *_reason;
    NSString *_signInButtonString;
    id <AKTVSignInViewControllerDelegate> _signInDelegate;
    UIViewController *_childViewController;
    UITapGestureRecognizer *_menuRecognizer;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) _Bool isUsernameEditable; // @synthesize isUsernameEditable=_isUsernameEditable;
@property(nonatomic) __weak id <AKTVSignInViewControllerDelegate> signInDelegate; // @synthesize signInDelegate=_signInDelegate;
@property(copy, nonatomic) NSString *signInButtonString; // @synthesize signInButtonString=_signInButtonString;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType ak_authenticateAction; // @synthesize ak_authenticateAction=_ak_authenticateAction;
@property(copy, nonatomic) CDUnknownBlockType ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
- (void).cxx_destruct;
- (void)_handleMenuRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_submitButtonPressed:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (id)_messageStringAttributes;
- (id)_titleStringAttributes;
- (void)_showChildViewController:(id)arg1;
- (void)_showActivityIndicatorViewController;
- (void)_showCredentialEntryViewControllerForState:(long long)arg1;
- (void)_showPasswordEntryViewController;
- (void)_showUsernameEntryViewController;
- (void)resetAuthenticatingState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

