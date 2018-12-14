#include<cspider/spider.h>

/*
    自定义的解析函数，d为获取到的html页面字符串
*/
void p(cspider_t *cspider, char *d) {

  char *get[100];
  //xpath解析html
  int size = xpath(d, "//body/div[@class='wrap']/div[@class='sort-column area']/div[@class='column-bd cfix']/ul[@class='st-list cfix']/li/strong/a", get, 100);

  int i;
  for (i = 0; i < size; i++) {
  //将获取到的电影名称，持久化
    saveString(cspider, get[i]);
  }

}
/*
    数据持久化函数，对上面解析函数中调用的saveString()函数传入的数据，进行进一步的保存
*/
void s(void *str) {
  char *get = (char *)str;
  printf("%sn", get);
  return;
}

int main() {
  //初始化spider
  cspider_t *spider = init_cspider();
  char *agent = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10.10; rv:42.0) Gecko/20100101 Firefox/42.0";
  //char *cookie = "bid=s3/yuH5Jd/I; ll=108288; viewed=1130500_24708145_6433169_4843567_1767120_5318823_1899158_1271597; __utma=30149280.927537245.1446813674.1446983217.1449139583.4; __utmz=30149280.1449139583.4.4.utmcsr=accounts.douban.com|utmccn=(referral)|utmcmd=referral|utmcct=/login; ps=y; ue=965166527@qq.com; dbcl2=58742090:QgZ2PSLiDLQ; ck=T9Wn; push_noty_num=0; push_doumail_num=7; ap=1; __utmb=30149280.0.10.1449139583; __utmc=30149280";

  //设置要抓取页面的url
  cs_setopt_url(spider, "so.tv.sohu.com/list_p1100_p20_p3_u5185_u5730_p40_p5_p6_p77_p80_p9_2d1_p101_p11.html");
  //设置user agent
  cs_setopt_useragent(spider, agent);
  //cs_setopt_cookie(spider, cookie);
  //传入解析函数和数据持久化函数的指针
  cs_setopt_process(spider, p);
  cs_setopt_save(spider, s);
  //设置线程数量
  cs_setopt_threadnum(spider, DOWNLOAD, 2);
  cs_setopt_threadnum(spider, SAVE, 2);
  //FILE *fp = fopen("log", "wb+");
  //cs_setopt_logfile(spider, fp);
  //开始爬虫
  return cs_run(spider);
}