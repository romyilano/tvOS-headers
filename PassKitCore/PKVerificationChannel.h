//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _requiresUserInteraction;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_typeDescription;
    NSString *_organizationName;
    NSString *_contactPoint;
    NSString *_sourceAddress;
}

+ (_Bool)supportsSecureCoding;
+ (id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2;
@property(copy, nonatomic) NSString *sourceAddress; // @synthesize sourceAddress=_sourceAddress;
@property(copy, nonatomic) NSString *contactPoint; // @synthesize contactPoint=_contactPoint;
@property(nonatomic) _Bool requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)needsServerRequest;
- (id)description;
@property(readonly, nonatomic) NSString *typeDescriptionUnlocalized;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
