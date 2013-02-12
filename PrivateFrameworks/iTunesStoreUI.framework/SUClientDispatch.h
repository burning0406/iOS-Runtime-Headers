/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUClientDispatch : NSObject {
}

+ (struct __CFArray { }*)assetTypes;
+ (id)beginDownloadQueueSessionForDownloadKind:(id)arg1;
+ (id)beginDownloadQueueSessionWithDownloadKinds:(id)arg1;
+ (id)beginPreOrderQueueSessionWithDownloadKinds:(id)arg1;
+ (id)clientIdentifier;
+ (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
+ (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
+ (void)endDownloadQueueSessionForQueue:(id)arg1;
+ (void)endPreOrderQueueSessionWithDownloadKinds:(id)arg1;
+ (BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2;
+ (void)exitStoreWithReason:(int)arg1;
+ (BOOL)gotoStorePage:(id)arg1 animated:(BOOL)arg2;
+ (id)imageCache;
+ (id)imagePool;
+ (BOOL)isTabBarControllerLoaded;
+ (BOOL)matchesClientApplication:(id)arg1;
+ (id)newScriptInterface;
+ (BOOL)openClientURL:(id)arg1;
+ (BOOL)openExternalURL:(id)arg1;
+ (BOOL)openURL:(id)arg1 inClientApplication:(id)arg2;
+ (BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
+ (BOOL)reportAProblemForItemIdentifier:(unsigned long long)arg1;
+ (id)scriptExecutionContext;
+ (id)searchHintsURLBagKey;
+ (id)searchURLBagKey;
+ (BOOL)selectSectionWithIdentifier:(id)arg1;
+ (BOOL)sendActionForDialog:(id)arg1 button:(id)arg2;
+ (id)tabBarController;
+ (id)viewControllerFactory;

@end