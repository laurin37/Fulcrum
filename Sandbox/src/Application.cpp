
namespace Fulcrum
{
	__declspec(dllimport) void Print(int i);
}

void main()
{
	Fulcrum::Print(234);
}