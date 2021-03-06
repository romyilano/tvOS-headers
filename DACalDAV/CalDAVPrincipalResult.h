//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CalDAVPrincipalResult : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayName;
    NSString *_resultType;
    NSString *_principalPath;
    NSArray *_emailAddresses;
    NSMutableArray *_mCUAddresses;
    NSMutableArray *_mEmailAddresses;
}

+ (id)resultFromResponse:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mEmailAddresses; // @synthesize mEmailAddresses=_mEmailAddresses;
@property(retain, nonatomic) NSMutableArray *mCUAddresses; // @synthesize mCUAddresses=_mCUAddresses;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *preferredCUAddress;
- (void)addEmail:(id)arg1;
- (void)addCUAddress:(id)arg1;
@property(readonly, nonatomic) NSArray *cuAddresses;
- (id)initWithResponse:(id)arg1;
- (id)init;
- (id)convertToDAContactSearchResultElement;

@end

