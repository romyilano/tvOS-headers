//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@interface SSVBarrierOperationQueue : NSOperationQueue
{
}

- (void)addBarrierOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1;

@end

