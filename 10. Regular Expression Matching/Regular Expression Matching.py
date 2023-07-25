def isMatch(s: str, p: str) -> bool:
    unit = ['x']
    if len(p) == 1:
        unit.append(p)
    else:
        for i in p:
            if i == "*":
                val = unit.pop()
                unit.append(val + i)
            else:
                unit.append(i)

    def optimizer():
        result = []
        for i in range(len(unit)):
            if len(unit[i]) == 2:
                if len(result) == 0:
                    result.append(unit[i])
                elif result[len(result) - 1] != unit[i]:
                    result.append(unit[i])
            else:
                result.append(unit[i])
        return result

    unit = optimizer()
    print(unit)

    def Check(p_pend):
        for i in p_pend:
            if len(i) == 1:
                return False
        return True

    def Rec(parent, depth, s_pend, p_pend):
        # print(parent, depth, s_pend, p_pend)
        if len(s_pend) == 1 and (len(p_pend) == 1 or Check(p_pend)) and (s_pend[0] == p_pend[0] or p_pend[0] == '.'):
            return True
        if len(s_pend) == 0 and (len(p_pend) == 0 or Check(p_pend)):
            return True
        if len(s_pend) == 0 or len(p_pend) == 0:
            return False
        if s_pend[0] == p_pend[0] or p_pend[0] == '.':
            # print("cond0", s_pend[0], p_pend[0])
            for i in range(1, len(p_pend)):
                if Rec("cond0", depth + 1, s_pend[1:], p_pend[i:]):
                    return True
                if len(p_pend[i]) == 1:
                    break
        elif len(p_pend[0]) == 2 and s_pend[0][0] == p_pend[0][0] or p_pend[0][0] == '.':
            # print("cond1", s_pend[0], p_pend[0])
            for i in range(len(p_pend)):
                if Rec("cond1", depth + 1, s_pend[1:], p_pend[i:]):
                    return True
                if len(p_pend[i]) == 1:
                    break
        elif len(p_pend[0]) == 2 and s_pend[0][0] != p_pend[0][0] and p_pend[0][0] != '.':
            # print("cond2", s_pend[0], p_pend[0])
            for i in range(1, len(p_pend)):
                if Rec("cond2", depth + 1, s_pend, p_pend[i:]):
                    return True
                if len(p_pend[i]) == 1:
                    break
        return False

    return Rec("base", 0, 'x' + s, unit)


print(isMatch("aaaaaaaaaaaaaaaaaaab", "c*a*b"))
