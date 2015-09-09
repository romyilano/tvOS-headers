//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/NSCopying-Protocol.h>

@class NSString;

@interface XBApplicationIdentity : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_dataContainerPath;
    NSString *_bundleContainerPath;
    NSString *_snapshotContainerPath;
}

+ (id)identityForCompatibilityInfo:(id)arg1;
+ (id)identityForApplicationInfo:(id)arg1;
+ (id)identityForApplicationProxy:(id)arg1;
+ (id)identityForBundleIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *snapshotContainerPath; // @synthesize snapshotContainerPath=_snapshotContainerPath;
@property(copy, nonatomic) NSString *bundleContainerPath; // @synthesize bundleContainerPath=_bundleContainerPath;
@property(copy, nonatomic) NSString *dataContainerPath; // @synthesize dataContainerPath=_dataContainerPath;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)snapshotContainerPathForSnapshot:(id)arg1;
- (id)snapshotContainerPathForGroupID:(id)arg1;
- (void)dealloc;

@end
