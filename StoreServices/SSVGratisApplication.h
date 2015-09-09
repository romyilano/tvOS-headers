//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface SSVGratisApplication : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersionIdentifier;
    NSString *_itemIdentifier;
}

@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

@end
