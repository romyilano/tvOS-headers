//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface TVSIRVolumeButtonConfiguration : NSObject
{
    _Bool _isBuiltIn;
    NSString *_configurationName;
    NSUUID *_configurationUUID;
}

@property(readonly, nonatomic) _Bool isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(readonly, nonatomic) NSUUID *configurationUUID; // @synthesize configurationUUID=_configurationUUID;
@property(readonly, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithUUID:(id)arg1 andName:(id)arg2 isBuiltIn:(_Bool)arg3;
- (id)init;

@end
