#include "LiteralExpressionSyntax.h"

#include "SyntaxToken.h"

namespace Mamba
{
    LiteralExpressionSyntax::LiteralExpressionSyntax(
        const std::shared_ptr<const class SyntaxTree> SyntaxTree,
        const std::shared_ptr<const class SyntaxToken> LiteralToken) noexcept :
        Super(SyntaxTree), LiteralToken(LiteralToken), Value(LiteralToken->Value)
    {
    }

    LiteralExpressionSyntax::LiteralExpressionSyntax(const std::shared_ptr<const class SyntaxTree> SyntaxTree,
                                                     const std::shared_ptr<const class SyntaxToken> LiteralToken,
                                                     const std::shared_ptr<const class Literal> Value) noexcept :
        Super(SyntaxTree), LiteralToken(LiteralToken), Value(Value)
    {
    }

    SyntaxKind LiteralExpressionSyntax::Kind() const noexcept
    {
        return SyntaxKind::LiteralExpression;
    }

    std::vector<std::shared_ptr<const class SyntaxNode>> LiteralExpressionSyntax::Children() const noexcept
    {
        return { LiteralToken };
    }
} // namespace Mamba