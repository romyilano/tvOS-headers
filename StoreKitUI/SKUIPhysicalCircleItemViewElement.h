//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIPhysicalCircleItemViewElement : SKUIViewElement
{
    long long _circleSize;
    NSString *_itemIdentifier;
}

@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) long long circleSize; // @synthesize circleSize=_circleSize;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUILabelViewElement *titleElement;
@property(readonly, nonatomic) SKUIImageViewElement *imageElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

