/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableDictionary;

@interface ADLocationAlert : NSObject {
    NSMutableDictionary *_approvedAds;
}

+ (id)_cacheFile;
+ (id)sharedGeoAlert;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)appWillTerminate:(id)arg1;
- (void)cleanCache;
- (void)clearCache;
- (void)dealloc;
- (void)iAdCanUseGeoLocation:(id)arg1 givenTitle:(id)arg2 withBlock:(id)arg3;
- (id)init;
- (void)loadCache;
- (void)saveCache;
- (void)showAlertPanelWithGuid:(id)arg1 forGivenAdTitle:(id)arg2 usingBlock:(id)arg3;

@end