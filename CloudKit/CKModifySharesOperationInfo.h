//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKModifySharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_sharesToSave;
    NSArray *_shareIDsToDelete;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *shareIDsToDelete; // @synthesize shareIDsToDelete=_shareIDsToDelete;
@property(retain, nonatomic) NSArray *sharesToSave; // @synthesize sharesToSave=_sharesToSave;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
