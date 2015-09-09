//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import <WebUI/WBUFormAutoFillWebView-Protocol.h>

@class NSDictionary, NSString, UIView, WBUFormAutoFillFrameHandle;

@interface WBUFormAutoFillWebView : WKWebView <WBUFormAutoFillWebView>
{
    WBUFormAutoFillFrameHandle *_lastPasswordGenerationOrSubmitEventFrame;
    NSDictionary *_lastPasswordGenerationOrSubmitEventForm;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *webui_EVOrganizationName;
- (struct __SecTrust *)_serverTrust;
@property(copy, nonatomic, setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
- (id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (id)webui_formMetadataAndFrame:(id *)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
@property(readonly, nonatomic) UIView *webui_viewForAutoFillPrompt;
@property(readonly, nonatomic) _Bool webui_privateBrowsingEnabled;
- (CDUnknownBlockType)webui_preventNavigationDuringAutoFillPrompt;
- (void)_applicationDidEnterBackgroundOrWillTerminate:(id)arg1;
- (void)_close;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
