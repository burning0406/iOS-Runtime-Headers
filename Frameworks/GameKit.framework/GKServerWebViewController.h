/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKImageBackgroundView, NSData, NSString, NSURLRequest, UIAlertView, UIWebView;

@interface GKServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _addedSheetFrame;
    UIAlertView *_alert;
    NSString *_authToken;
    } _backgroundInsets;
    GKImageBackgroundView *_backgroundView;
    NSString *_cancelCallback;
    id _completionHandler;
    NSString *_leftCallback;
    NSString *_okCallback;
    NSString *_playerID;
    NSURLRequest *_previousRequest;
    NSData *_pushToken;
    NSString *_rightCallback;
    int _status;
    UIWebView *_webView;
}

@property BOOL addedSheetFrame;
@property(retain) UIAlertView * alert;
@property(retain) NSString * authToken;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } backgroundInsets;
@property(retain) NSString * cancelCallback;
@property(copy) id completionHandler;
@property(retain) NSString * leftCallback;
@property(retain) NSString * okCallback;
@property(retain) NSString * playerID;
@property(retain) NSURLRequest * previousRequest;
@property(retain) NSData * pushToken;
@property(retain) NSString * rightCallback;
@property int status;

- (BOOL)addedSheetFrame;
- (id)alert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)authToken;
- (void)authenticateAndTryURLRequestAgain:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (void)cancelAlertWithoutDelegateCallback;
- (id)cancelCallback;
- (id)completionHandler;
- (void)dealloc;
- (id)decodeDashEncodedString:(id)arg1;
- (void)finish;
- (id)gkBackgroundView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)leftCallback;
- (void)leftNavButtonPressed;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (id)okCallback;
- (void)parseAlertURLString:(id)arg1;
- (void)parseNavBarURLString:(id)arg1;
- (id)playerID;
- (id)previousRequest;
- (void)processGameKitURLComponents:(id)arg1;
- (id)pushToken;
- (id)rightCallback;
- (void)rightNavButtonPressed;
- (void)setAddedSheetFrame:(BOOL)arg1;
- (void)setAlert:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setCancelCallback:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)setLeftCallback:(id)arg1;
- (void)setOkCallback:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPreviousRequest:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRightCallback:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)showMessageForError:(id)arg1;
- (int)status;
- (void)viewWillAppear:(BOOL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(unsigned int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end