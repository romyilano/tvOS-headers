//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVSectionData : NSObject
{
    NSArray *_items;
    NSArray *_cellSizes;
    unsigned long long _numColumns;
    double _height;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) unsigned long long numColumns; // @synthesize numColumns=_numColumns;
@property(copy, nonatomic) NSArray *cellSizes; // @synthesize cellSizes=_cellSizes;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end
