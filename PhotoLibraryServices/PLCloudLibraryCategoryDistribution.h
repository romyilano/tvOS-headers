//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PLCloudLibraryCategoryDistribution : NSObject
{
    unsigned long long _cutoffPoint;
    unsigned long long _requiredBudget;
    unsigned long long _reservedBudget;
    unsigned long long _totalAssetsCount;
    NSString *_budgetingCategoryName;
    unsigned short _primaryQuality;
    unsigned short _secondaryQuality;
    unsigned short _budgetingCategoryId;
    unsigned long long _layoutBehavior;
}

@property(readonly, nonatomic) unsigned long long reservedBudget; // @synthesize reservedBudget=_reservedBudget;
@property(readonly, nonatomic) unsigned long long totalAssetsCount;
- (unsigned long long)totalReservedBudget;
@property(readonly, nonatomic) unsigned long long remainingBudget;
@property(readonly, nonatomic) unsigned long long requiredBudget;
@property(readonly, nonatomic) unsigned long long cutoffPoint;
@property(readonly, nonatomic) unsigned short budgetingCategory;
@property(readonly, nonatomic) unsigned short secondaryQualityClass;
@property(readonly, nonatomic) unsigned short primaryQualityClass;
@property(readonly, nonatomic) NSString *name;
- (id)description;
- (void)dealloc;
- (id)plistSerializedObject;
- (id)initWithSerializedPlist:(id)arg1;
- (id)initWithBudgetingCategory:(id)arg1 layoutBehavior:(unsigned long long)arg2 reservedBudget:(unsigned long long)arg3;
- (unsigned long long)calculateCutoffPointBetween:(unsigned long long)arg1 and:(unsigned long long)arg2 inBudgetingCateogry:(id)arg3;
- (unsigned long long)spaceRequiredForCutoffPoint:(unsigned long long)arg1 inBudgetingCateogry:(id)arg2;

@end

