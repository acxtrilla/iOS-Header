//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSNumber;

@protocol CTXPCServiceAppDataUsageInterface
- (void)clearUserEnteredBillingEndDayOfMonth:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUserEnteredBillingEnd:(CTXPCServiceSubscriptionContext *)arg1 dayOfMonth:(NSNumber *)arg2 completion:(void (^)(NSError *))arg3;
- (void)userEnteredBillingEndDayOfMont:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)clearUserEnteredMonthlyRoamingBudget:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUserEntered:(CTXPCServiceSubscriptionContext *)arg1 monthlyRoamingBudget:(NSNumber *)arg2 completion:(void (^)(NSError *))arg3;
- (void)userEnteredMonthlyRoamingBudget:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)clearUserEnteredMonthlyBudget:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUserEntered:(CTXPCServiceSubscriptionContext *)arg1 monthlyBudget:(NSNumber *)arg2 completion:(void (^)(NSError *))arg3;
- (void)userEnteredMonthlyBudget:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)billingCycleEndDatesForLastPeriods:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)dataUsageForLastPeriods:(unsigned long long)arg1 completion:(void (^)(CTDeviceDataUsage *, NSError *))arg2;
@end
