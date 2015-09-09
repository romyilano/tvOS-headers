//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVHomeSharingServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface TVHSSDataQueryInfo : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _type;
    NSArray *_filters;
    NSArray *_properties;
    NSString *_groupingProperty;
    long long _groupingDirection;
    NSDictionary *_metadata;
    CDStruct_627e0f85 _range;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) CDStruct_627e0f85 range; // @synthesize range=_range;
@property(nonatomic) long long groupingDirection; // @synthesize groupingDirection=_groupingDirection;
@property(copy, nonatomic) NSString *groupingProperty; // @synthesize groupingProperty=_groupingProperty;
@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)query;
- (id)description;
- (id)initWithQuery:(id)arg1;

@end
