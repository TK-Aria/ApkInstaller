
## WPF Dock .
https://blog.okazuki.jp/entry/20130105/1357395569

## cURLのソースからコンパイル .
https://qiita.com/riffrain@github/items/74594fe358ac76c72f5a

## Unity.Androidの拡張ビルド .
https://qiita.com/Gazyu/items/68ef5f8e60500575932b

## Unix Screenコマンド
https://qiita.com/hnishi/items/3190f2901f88e2594a5f

## UnrealEngineを魔改造する .
http://unrealengine.hatenablog.com/entry/2018/12/01/000000

## バイキング流UE4活用術 .
https://www.slideshare.net/EpicGamesJapan/ue4-bp18

## TCPを利用したチャットアプリケーション .
https://dobon.net/vb/dotnet/internet/tcpchat.html

## JenkinsAPIでジョブ情報の取得 .
https://qiita.com/tamikura@github/items/033ab9180561b6232509

## c++でRubyのStartWithを実装 .
https://marycore.jp/prog/cpp/starts-with-prefix-search/#starts_with%E9%96%A2%E6%95%B0

bool starts_with(const std::string& s, const std::string& prefix) {
   auto size = prefix.size();
   if (s.size() < size) return false;
   return std::equal(std::begin(prefix), std::end(prefix), std::begin(s));
}

