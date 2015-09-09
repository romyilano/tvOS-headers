//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface IBSceneUpdateProcessingRequest : NSObject <IBBinaryArchiving>
{
    CDUnknownBlockType _postProcessingBlock;
    long long _phase;
}

@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) CDUnknownBlockType postProcessingBlock; // @synthesize postProcessingBlock=_postProcessingBlock;
- (void).cxx_destruct;
- (void)didFinishProcessingResult:(id)arg1 orError:(id)arg2;
- (void)processResult:(id)arg1 orError:(id)arg2;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithPostProcessingBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
