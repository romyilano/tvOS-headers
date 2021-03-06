//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface HSRequest : NSObject
{
    NSDictionary *_arguments;
    _Bool _concurrent;
    _Bool _excludeSessionIDFromURL;
    _Bool _shouldPromptForAuthentication;
    _Bool _acceptsGzipEncoding;
    NSString *_action;
    long long _method;
    NSData *_bodyData;
    NSURL *_responseDataDestinationFileURL;
}

+ (id)request;
@property(nonatomic) _Bool acceptsGzipEncoding; // @synthesize acceptsGzipEncoding=_acceptsGzipEncoding;
@property(copy, nonatomic) NSURL *responseDataDestinationFileURL; // @synthesize responseDataDestinationFileURL=_responseDataDestinationFileURL;
@property(nonatomic) _Bool shouldPromptForAuthentication; // @synthesize shouldPromptForAuthentication=_shouldPromptForAuthentication;
@property(nonatomic) _Bool excludeSessionIDFromURL; // @synthesize excludeSessionIDFromURL=_excludeSessionIDFromURL;
@property(copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(readonly, nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
@property(readonly, nonatomic) double timeoutInterval;
- (id)description;
- (id)initWithAction:(id)arg1;

@end

