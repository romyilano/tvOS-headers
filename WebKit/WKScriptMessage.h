//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WKFrameInfo, WKWebView;

@interface WKScriptMessage : NSObject
{
    struct RetainPtr<id> _body;
    struct WeakObjCPtr<WKWebView> _webView;
    struct RetainPtr<WKFrameInfo> _frameInfo;
    struct RetainPtr<NSString> _name;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) WKFrameInfo *frameInfo;
@property(readonly, nonatomic) __weak WKWebView *webView;
@property(readonly, copy, nonatomic) id body;
- (id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4;

@end
