/* Generated by RuntimeBrowser
   Image: /var/containers/Bundle/Application/A77617CC-81F8-4D57-BCE6-77E8D969EEA1/UniqloWakeUp.app/UniqloWakeUp
 */

@interface UWAuthViewController : UWCommonViewController <UIWebViewDelegate> {
    int  _SNSType;
    id  _delegate;
    UIWebView * _webView;
}

@property (nonatomic, readwrite) int SNSType;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) id delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) UIWebView *webView;

- (void).cxx_destruct;
- (int)SNSType;
- (void)cancelButtonHandller:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSNSType:(int)arg1;
- (void)setWebView:(id)arg1;
- (void)viewDidLoad;
- (id)webView;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
