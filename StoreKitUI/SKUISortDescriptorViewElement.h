//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUISortDescriptorViewElement : SKUIViewElement
{
    _Bool _ascending;
    NSString *_property;
}

+ (_Bool)shouldParseChildDOMElements;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic, getter=isAscending) _Bool ascending; // @synthesize ascending=_ascending;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
