//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDictionary, NSString;

@interface SAGlance : SADomainObject
{
}

+ (id)glanceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)glance;
@property(copy, nonatomic) NSDictionary *localizedGlanceDisplayNameMap;
@property(copy, nonatomic) NSString *glanceId;
@property(copy, nonatomic) NSString *glanceDisplayName;
@property(copy, nonatomic) NSString *appId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

