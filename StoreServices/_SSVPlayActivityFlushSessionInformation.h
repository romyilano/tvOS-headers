//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSString;

@interface _SSVPlayActivityFlushSessionInformation : NSObject
{
    NSString *_endpointIdentifier;
    NSMutableIndexSet *_revisionsIndexSet;
    NSString *_revisionVersionToken;
    unsigned long long _sessionToken;
}

@property(nonatomic) unsigned long long sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *revisionVersionToken; // @synthesize revisionVersionToken=_revisionVersionToken;
@property(retain, nonatomic) NSMutableIndexSet *revisionsIndexSet; // @synthesize revisionsIndexSet=_revisionsIndexSet;
@property(copy, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
- (void).cxx_destruct;

@end

