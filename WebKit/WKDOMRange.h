//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WKDOMNode;

@interface WKDOMRange : NSObject
{
    struct RefPtr<WebCore::Range> _impl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) NSArray *textRects;
@property(readonly) _Bool isCollapsed;
@property(readonly, copy) NSString *text;
@property(readonly) long long endOffset;
@property(readonly, retain) WKDOMNode *endContainer;
@property(readonly) long long startOffset;
@property(readonly, retain) WKDOMNode *startContainer;
- (void)selectNodeContents:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)collapse:(_Bool)arg1;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)_initWithImpl:(struct Range *)arg1;
- (struct OpaqueWKBundleRangeHandle *)_copyBundleRangeHandleRef;

@end

